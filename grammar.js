module.exports = grammar({
    name: 'nasm',

    rules: {
        source_file: $ => repeat($._line),

        _line: $ => choice(
            $.instruction,
            $.directive,
            $.label,
            $.comment
        ),

        instruction: $ => seq(
            $.mnemonic,
            optional(seq($._operand, repeat(seq(',', $._operand))))
        ),

        mnemonic: $ => /[a-zA-Z]{2,6}/,

        _operand: $ => choice(
            $.register,
            $.immediate,
            $.memory,
            $.label_ref
        ),

        register: $ => choice(
            'eax', 'ebx', 'ecx', 'edx',
            'esi', 'edi', 'esp', 'ebp',
            'ax', 'bx', 'cx', 'dx',
            'al', 'ah', 'bl', 'bh', 'cl', 'ch', 'dl', 'dh',
            'r8', 'r9', 'r10', 'r11', 'r12', 'r13', 'r14', 'r15'
        ),
        immediate: $ => /0x[0-9a-fA-F]+|\d+/,
        memory: $ => /\[.*?\]/,
        label_ref: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        directive: $ => seq('.', /[a-zA-Z]+/, optional(/.*/)),
        label: $ => seq(/[a-zA-Z_][a-zA-Z0-9_]*/, ':'),

        comment: $ => /;.*/,
    },

    conflicts: $ => [
        [$.instruction],
    ],

});

module.exports = grammar({
  name: "ckwnc",

  extras: $ => [/[\s\n\t]/, $.comment],

  rules: {
    
    diagram: $ => repeat($.statement),

    comment: $ => /#.*/,

    statement: $ => seq(
      $.identifier,
      choice($.object,$.call,$.msg,$.self)
    ),

    object: $ => seq(
      ':',
      choice(
        $.identifier,
        'actor',
        'boundary',
        'control',
        'entity'
      )
    ),

    call: $ => seq(
      '.',
      $.identifier,
      $.parameters,
      optional($.body)
    ),

    msg: $ => seq(
      '>',
      $.identifier,
      $.parameters,
      optional($.body)
    ),
    
    self: $ => seq(
      $.parameters,
      optional($.body)
    ),

    body: $ => seq(
      '{',
      repeat($.statement),
      '}'
    ),

    parameters: $ => /\(([^\n\(\\]*(\\.[^\n\(\\]*)*)\)/,

	identifier: $ => choice($.name,$.string),

    string: $ => /"([^\n"\\]*(\\.[^\n"\\]*)*)"/,

    name: $ => /[^">{}(): \n\t][^">{}(): \n\t]+/


  }
});

def to_english(number):
    _ones = {
            1: 'one',
            2: 'two',
            3: 'three',
            4: 'four',
            5: 'five',
            6: 'six',
            7: 'seven',
            8: 'eight',
            9: 'nine',
            10: 'ten',
            11: 'eleven',
            12: 'twelve',
            13: 'thirteen',
            14: 'fourteen',
            15: 'fifteen',
            16: 'sixteen',
            17: 'seventeen',
            18: 'eighteen',
            19: 'nineteen',
            }

    _tens = {
            2: 'twenty',
            3: 'thirty',
            4: 'forty',
            5: 'fifty',
            6: 'sixty',
            7: 'seventy',
            8: 'eighty',
            9: 'ninety'
            }
    if number == 0:
        return 'zero'
    else:
        output = ''

        if number >= 20:
            output += _tens[number / 10]
            number %= 10
            if number % 10 in _ones:
                output += '-'

        if number in _ones:
            output += _ones[number]

        return output
i = int(input())
print to_english(i)
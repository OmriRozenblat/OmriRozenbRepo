one2twenty = ('One Two Three Four Five Six Seven Eight Nine Ten Eleven Twelve'
              ' Thirteen Fourteen Fifteen Sixteen Seventeen Eighteen Nineteen').split()
tens = 'Twenty Thirty Forty Fifty Sixty Seventy Eighty Ninety'.split()


def int2string(num):
	if num == 0:
		return ''
	if num < 20:
		return one2twenty[num - 1]
	if num < 100:
		return tens[num // 10 - 2] + ' ' + int2string(num % 10)
	if num < 1000:
		return one2twenty[num // 100 - 1] + ' Hundred ' + int2string(num % 100)
	return one2twenty[num // 1000 - 1] + ' Thousand ' + int2string(num % 1000)


def hello():
	print('Hello World!')
 
 
 
print(int2string(154))
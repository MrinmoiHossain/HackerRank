if __name__ == '__main__':
	N, M = map(int, input().split())
	for i in range(1, N, 2): 
		print((i * ".|.").center(M, "-"))
	print("welcome".upper().center(M, "-"))
	for i in range(N-2, -1, -2): 
		print((i * ".|.").center(M, "-"))

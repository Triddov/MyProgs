# Function to check if two queens threaten each other or not
def isSafe(mat, r, c):

	for i in range(r):
		if mat[i][c] == 'X':
			return False

	(i, j) = (r, c)
	while i >= 0 and j >= 0:
		if mat[i][j] == 'X':
			return False
		i = i - 1
		j = j - 1

	(i, j) = (r, c)
	while i >= 0 and j < len(mat):
		if mat[i][j] == 'X':
			return False
		i = i - 1
		j = j + 1

	return True



def nQueen(mat, r):
    global a
    
    if r == len(mat):
        a+=1
        return 

    for i in range(len(mat)):
        if isSafe(mat, r, i):
            mat[r][i] = 'X'
            nQueen(mat, r + 1)
            mat[r][i] = '–'

if __name__ == '__main__':

    a=0
    N = 8
    
    mat = [['–' for x in range(N)] for y in range(N)]
    nQueen(mat, 0)
    A()


def find_square(board, m ,n, d):
    tmp_mat = [[0 for x in range(n)] for y in range(m)]
    
    for i in range(m - 1):
        for j in range(n - 1):
            #print(i,j)
            if board[i][j] != d:
                if board[i][j] == board[i][j+1] == board[i+1][j] == board[i+1][j+1]:
                    #print(board[i][j],board[i][j+1],board[i+1][j],board[i+1][j+1])
                    tmp_mat[i][j] = 1
                    tmp_mat[i+1][j] = 1
                    tmp_mat[i][j+1] = 1
                    tmp_mat[i+1][j+1] = 1

    result = 0
    for i in range(m):
        for j in range(n):
            if tmp_mat[i][j] == 1:
                result += 1
                for k in range(i,0,-1):
                    try:
                        board[k][j] = board[k-1][j]
                        #print(board,i,j,k)
                    except:
                        pass
                board[0][j] = d

    return board, result
    

if __name__ == "__main__":
    m = input()
    n = input()
    board = input()
    #print(board[0][1])
    new_board = [["" for x in range(n)] for y in range(m)] 

    for i in range(m):
        for j in range(n):
            new_board[i][j] = board[i][j]
    result = 0
    while(True):
        new_board, tmp_len = (find_square(new_board,m,n,"_"))
        #print(new_board)
        result += tmp_len
        if tmp_len == 0:
            break
    
    print (result)


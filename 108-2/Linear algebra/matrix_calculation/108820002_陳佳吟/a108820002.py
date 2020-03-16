import math

# 題目給的測資
a = [
  [-1, 2, 0],
  [2, 0, 3]
]

b = [
  [2, 0, -1],
  [1, -2, 0]
]

c = [
  [0, 2], 
  [1, 0],
  [-1, 1]
]

e = [
  [2, -1],
  [math.pi, math.log10(2)],
  [-2, 6]
]

i = [
  [1, 0],
  [0, 1]
]

# function of add
def add(x, y):
    rows_X = len(x)
    cols_X = len(x[0])
    rows_Y = len(y)
    cols_Y = len(y[0])

    if (rows_X == rows_Y) and (cols_X == cols_Y):

        result = [[0] * cols_X for i in range(rows_X)]

        for i in range(rows_X):
            for j in range(cols_X):
                result[i][j] = x[i][j] + y[i][j]

        return result
    else:
        raise ValueError("Matrixs are not same shape")

# function of dot
def dot(x, y):

    rows_X = len(x)
    cols_X = len(x[0])
    rows_Y = len(y)
    cols_Y = len(y[0])

    if (cols_X == rows_Y):
        result = [[0] * cols_Y for i in range(rows_X)]
        for i in range(rows_X):
            for j in range(cols_Y):
                for k in range(cols_X):
                    result[i][j] += x[i][k] * y[k][j]
        return result
    else:
        raise ValueError("Matrixs's rows and cols aren't same")

# function of transpose
def transpose(x):
    y = zip(*x)
    return y

# function of inverse
def inverse(x):

    rows_X = len(x)
    cols_X = len(x[0])

    if(rows_X == cols_X):

        if(rows_X == 2):
            y = [[x[1][1], (-1) * x[0][1]], [(-1) * x[1][0], x[0][0]]]
            
            result = x[0][0] * x[1][1] - (x[0][1] * x[1][0])

            return muti(1 / result, y)

    else:
        raise ValueError("it is not n*n")

# function for multiplying vectors
def muti(x, y):

    rows_Y = len(y)
    cols_Y = len(y[0])

    result = y

    for i in range(rows_Y):
        for j in range(cols_Y):
            result[i][j] = x * result[i][j]

    return result

        
# Questions
def main():
    print('A + 2B = {}'.format(add(a, muti(2, b))))
    print('C - E = {}'.format(add(c, muti(-1, e))))
    
    print('A^T = ')
    for i in transpose(a):
        print(i)

    print('E^T = ')
    for i in transpose(e):
        print(i)

    print('F = A * C = {}'.format(dot(a, c)))
    print('G = C * A = {}'.format(dot(c, a)))
    print('F^(-1) = {}'.format(inverse(dot(a, c))))

# call main
main()
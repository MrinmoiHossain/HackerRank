from sklearn.linear_model import LinearRegression
import numpy as np

if __name__ == '__main__':
    m, n = map(int, input().split())

    x = []
    y = []

    for _ in range(n):
        data = input().strip().split(' ')
        x.append(data[0:m])
        y.append(data[m:m+1])

    lm = LinearRegression()
    lm.fit(x, y)
    a = lm.intercept_
    b = lm.coef_

    #print(b[0][1])
    q = int(input())
    xPedict = []
    for _ in range(q):
        xPedict.append(input().strip().split(' '))
    
    ndata = np.array(xPedict, float)
    temp = np.dot(ndata,b[0])
    Y_new = a + temp

    for i in Y_new:
        print("%.2f" % i)
        

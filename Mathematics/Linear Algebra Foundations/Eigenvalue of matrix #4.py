import numpy as np
from numpy import linalg as LA

li = [[2, -1], [-1, 2]]
nli = np.array(li)
y = LA.inv(nli)
print(LA.eigvals(y))

z = nli - 4 * np.identity(2)
print(LA.eigvals(z))

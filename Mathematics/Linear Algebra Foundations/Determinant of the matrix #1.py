import numpy as np

li = [[3, 0, 0, -2, 4],
      [0, 2, 0, 0, 0],
      [0, -1, 0, 5, -3],
      [-4, 0, 1, 0, 6],
      [0, -1, 0, 3, 2]
      ]

nli = np.array(li)
#print(nli)
print(np.linalg.det(nli))

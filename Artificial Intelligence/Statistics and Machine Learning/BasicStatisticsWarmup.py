import numpy as np
import scipy.stats as sp
#from scipy import stats

if __name__ == '__main__':
    n = int(input())
    v = np.array(input().split()).astype(np.int32)

    ci0 = np.mean(v) - (1.96 * np.std(v)/np.sqrt(n)) 
    ci1 = np.mean(v) + (1.96 * np.std(v)/np.sqrt(n)) 

    print("%0.1f" % np.mean(v))
    print("%0.1f" % np.median(v))
    print(int(sp.mode(v)[0]))
    print("%0.1f" % np.std(v))
    print("%0.1f %0.1f" % (ci0, ci1))

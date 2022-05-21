import numpy as np
import matplotlib.pyplot as plt


def Descremenate_Cir(d):
    mat = np.mgrid[-1:1 + d:d, -1:1 + d:d]
    x_mat = mat[1]
    y_mat = mat[0]
    size = np.shape(x_mat)[0]
    print(size)
    x_cor, y_cor = [], []

    for i in range(size):
        for j in range(size):
            if (x_mat[i][j]) ** 2 + (y_mat[i][j]) ** 2 <= rad ** 2:
                x_cor = np.append(x_cor, x_mat[i][j])
                y_cor = np.append(y_cor, y_mat[i][j])
    print(x_cor)
    return (x_cor, y_cor)


def Calculate_Q(x_cor, y_cor, size, d, v):
    # Intialize matrix
    mat = np.zeros((size, size))
    for i in range(size):
        vector = np.sqrt(1 / ((x_cor[i] - x_cor[i+1:]) ** 2 + (y_cor[i] - y_cor[i+1:]) ** 2))
        mat[i,i+1:]= vector
        mat[i+1:,i] = vector
        mat[i][i] = 4 * 0.8814/ d

    v_vec = v * np.ones(size)
    x_vec = np.linalg.solve(mat, v_vec)

    return (x_vec.sum() * 4 * np.pi * 8.85 * (10 ** (-12)))


# Main
rad = 1
v = 1
d2 = np.linspace(0.02, 0.25, 200)
d1 = np.array([0.15, 0.12, 0.1, 0.075, 0.05, 0.025, 0.02, 0.25])



q1 = []
for elem in d1:
    x_cor, y_cor = Descremenate_Cir(elem)
    size_cor = np.shape(x_cor)[0]
    q1 = np.append(q1, [Calculate_Q(x_cor, y_cor, size_cor, elem, v)])

plt.scatter(d1,q1,color='blue')
plt.show()

# Test
x, y = Descremenate_Cir(0.02)
size_cor = np.shape(x)[0]
print(Calculate_Q(x, y, size_cor, 0.02, 1))
from quopri import decodestring
import matplotlib.pyplot as plt

x = []
y = []

f = open('/home/nmallam/Downloads/ff.txt', 'r')
for row in f:
    row = row.split(' ')
    x.append((row[0]))
    y.append((row[1]))
plt.plot(x, y)

plt.xlabel('x')
plt.ylabel('y')

plt.show()

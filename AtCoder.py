A	Maxi-Buying
drink = int(input())
taxeddrink = 1.08 * drink 
if taxeddrink < 206:
    print("Yay!")
elif 206 <= taxeddrink <= 207:
    print("so-so")
else:
    print(":(")


B	Savings
N = int(input())
savings = 0
for i in range(N):
    savings += int(i)
    if savings >= N:
        print(i)
        break

N = int(input())
savings = 0
index = 0
while savings < N:
    index += 1
    savings += int(index)
print(index)


A - Repression
cards = input()
# cards[2]<cards[0]?cards[1] or cards[0]?cards[1]<cards[2]
if (cards[0] - cards[2]) * (cards[1] - cards[2]) > 0:
    if()
    max = cards[0] + cards[1]
# cards[0]<cards[2]<cards[1]
elif (cards[0] - cards[2]) * (cards[1] - cards[2]) < 0:    
# cards[0]<=cards[2]<=cards[1]
elif (cards[0] - cards[2]) * (cards[1] - cards[2]) <= 0:
print(cards)

list = [int(i) for i in input().split()]
a = list[0]
b = list[1]
c = list[2]
if a <= b:
    if b <= c:
        max = b + c
    elif a <= c:
        max = b + c
    elif c <= a:
        max = a + b
elif b <= a:
    if a <= c:
        max = a + c
    elif c <= b:
        max = a + b
    elif b <= c:
        max = a + c
print(max)


B - Hydrate
list = [int(i) for i in input().split()]
A = list[0]
B = list[1]
C = list[2]
D = list[3]
skyBlueBall = A
redBall = 0
count = 0
α = (A + B * 10)
β = (0 + C * 10 * D)
if β < α:
    print(-1)
elif α <= β:
    while redBall * D <= skyBlueBall:
        count += 1
        skyBlueBall += B
        redBall += C
    print(count)

A,B,C,D = map(int,input().split())
ans = -1
diff = C*D-B
if 0 < diff:
    ans = (A+diff-1)//diff
print(ans)

A,B,C,D = map(int,input().split())
redBall = 0
count = 0
while redBall * D < A:
    A += B
    redBall += C
    count += 1
    if count > 10**5:
        count = -1
        break
print(count)


A - Rolling Dice
import random
A,B = map(int,input().split()) 
result = 0
def dice():
    return random.randint(1,6)
for i in range(A):
    result += dice()
if result >= B:
    print("Yes")
else:
    print("No")

A,B = map(int,input().split()) 
if 6*A >= B:
    print("Yes")
else:
    print("No")

A,B = map(int,input().split()) 
result = 0
for i in range(A):
    result += 6
print(result,B)
if result >= B:
    print("Yes")
else:
    print("No")

import random
A,B = map(int,input().split()) 
result = 0
def dice():
    return random.randint(1,6)
for i in range(A):
    result += dice()
    if result == B:
        print("Yes")
        exit()
print("No")

A,B = map(int,input().split()) 
result = 0
for i in range(A):
    for j in range(6):
        result += 1
        if result == B:
            print("Yes")
            exit()
print("No")

A,B = map(int,input().split()) 
minresult = 0
maxresult = 0
for i in range(A):
    minresult += 1
for i in range(A):
    maxresult += 6
if minresult <= B and B <= maxresult:
    print("Yes")
else:
    print("No")

A,B = map(int,input().split())
if A <= B <= 6*A:
    print("Yes")
else:
    print("No")


A - Counting
A,B = map(int,input().split())
if B < A:
    print(0)
else:
    ans = B - A + 1
    print(ans)


B - Can you buy them all?
N,X = map(int,input().split())
A = input().split()
remainingX = X - int(A[0])
for i in range(1,N):
    if i % 2 == 0:
        remainingX -= int(A[i])
    else:
        discountA = int(A[i]) - 1
        remainingX -= discountA
if remainingX >= 0:
    print("Yes")
else:
    print("No")


A - Cabbages
N,A,X,Y = map(int,input().split())
totalCost = 0
for i in range(N):
    totalCost += X
if N > A:
    for j in range(N-A):
        totalCost += Y
print(totalCost)

N,A,X,Y = map(int,input().split())
totalCost = 0
if N <= A:
    for i in range(N):
        totalCost += X
elif N > A:
    for j in range(A):
        totalCost += X
    for k in range(N-A):
        totalCost += Y
print(totalCost)


B - Bouzu Mekuri
N = int(input())
S = input()
Takahashi = 0
Aoki = 0
for i in range(0,N,2):
    Takahashi = int(S[i])
    if Takahashi == 1:
        print("Takahashi")
        break
    Aoki = int(S[i+1])
    if Aoki == 1:
        print("Aoki")
        break


C - Colorful Candies
N,K = map(int,input().split())
C = input()
collers = []
for i in range(0,N-K+1)
    Candies = C[i:K+1]
    collers[i] = Counter.len(Candies)
maxCollers = max(collers)
print(maxCollers)


A - Blood Pressure
A,B = map(int,input().split())
C = float((A - B) / 3 + B)
print(C)


B - Cycle Hit
from collections import Counter
S = [input() for _ in range(4)]
#print(S)
counter = Counter(S)
#print(counter)
Ans = {'3B': 1, 'HR': 1, '2B': 1, 'H': 1}
#print(Ans)
if counter == Ans:
    print("Yes")
else:
    print("No")


C - chokudai
import random
s = input()
n = len(s)
for i in range(2 ** n):
    name = []
    for j in range(n):
        if ((i >> j) & 1):
            name.append(s[j])
    if  :
        print()


A - Alloy
A,B = map(int,input().split())
if A > 0 and B == 0:
    print("Gold")
elif A == 0 and B > 0:
    print("Silver")
elif A > 0 and B > 0:
    print("Alloy")


B - Weak Password
X = input()
if X[0] == X[1] == X[2] == X[3]:
    print("Weak")
elif int(X[3]) == int(X[2]) + 1 and int(X[2]) == int(X[1]) + 1 and int(X[1]) == int(X[0]) + 1:
    print("Weak")
elif X[0] == "9" and X[1] == "0" and X[2] == "1" and X[3] == "2":
    print("Weak")
elif X[0] == "8" and X[1] == "9" and X[2] == "0" and X[3] == "1":
    print("Weak")
elif X[0] == "7" and X[1] == "8" and X[2] == "9" and X[3] == "0":
    print("Weak")
else:
    print("Strong")


C - Min Difference
import numpy as np
N,M = map(int,input().split())
A = [int(N) for N in input().split()]
B = [int(M) for M in input().split()]
difference = []
for i in range(N):
    for j in range(M):
        difference.append(A[i] - B[j])
abusoluteDifference = np.abs(difference)
ans = min(abusoluteDifference)
print(ans)

N,M = map(int,input().split())
A = [int(N) for N in input().split()]
B = [int(M) for M in input().split()]
Amax = max(A)
Bmax = max(B)
Amin = min(A)
Bmin = min(B)
ans = abs(Amin - Bmax)
print(ans)

n, m = map(int, input().split())
a = list(sorted(map(int, input().split())))
b = list(sorted(map(int, input().split())))
ans = 1 << 60
j = 0
for i in range(n):
    while j < m and b[j] < a[i]:
        j += 1
    ans = min(ans, abs(a[i]-b[j-1]), abs(a[i]-b[j%m]))
print(ans)


A - New Generation ABC
N = int(input())
if N <= 125:
    print(4)
elif 126 <= N <= 211:
    print(6)
else:
    print(8)


B - How many?
S,T = map(int,input().split())
a = 0
b = 0
c = 0
d = 0
e = 0
index = 0
while d <= S and e <= T:
    d = a + b + c
    e = a * b * c
    a += 1
    b += 1
    c += 1
    index += 1
print(index)

S,T = map(int,input().split())
a = b = c = -1
d = e = index = 0
for a in range(0, S + 1):
    for b in range(0, S + 1):
        for c in range(0, S + 1):
            d = a + b + c
            e = a * b * c
            if d <= S and e <= T:
                index += 1
print(index)


C - Distribution
N = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
time = 0
for i in range(1,N):


A - Your First Judge
S = input()
if S == "Hello,World!":
    print("AC")
else:
    print("WA")


B - log2(N)
N = int(input())
k = 0
while 2 ** k <= N:
    k = k + 1
print(k - 1)


C - One More aab aba baa
import itertools
S,K = input().split()
intK = int(K)
listS = list(S)
lengthS = len(listS)
strK = itertools.permutations(listS, lengthS)
listStrK = list(strK)
#print(listStrK)
sortedListStrK = sorted(listStrK)
#listStrK_unique = list(set(listStrK))
sortedListStrK_unique = list(dict.fromkeys(sortedListStrK))
#print(sortedListStrK_unique)
#print(sortedListStrK_unique[intK - 1])
StrKK = sortedListStrK_unique[intK - 1]
StrKKK = "".join(StrKK)
print(StrKKK)


D - Coprime 2
import math
N,M = map(int,input().split())
A = list(map(int, input().split()))
for i in range(M):
    gcd = math.gcd(A[i], k)
    print(gcd)


A - Lexicographic Order
S,T = input().split()
if S < T:
    print("Yes")
elif S > T:
    print("No")


B - AtCoder Quiz
S1 = input()
S2 = input()
S3 = input()
S4 = ""
if S1 == ABC:
    if S2 == ARC:
        if S3 == AGC:
            S4 = AHC
            print(S4)
        elif S3 == AHC:
            S4 = AGC
            print(S4)
    if S2 == AGC:
        if S3 == ARC:
            S4 = AHC
            print(S4)
        elif S3 == AHC:
            S4 = ARC
            print(S4)
    if S2 == AHC:
        if S3 == ARC:
            S4 = AGC
            print(S4)
        elif S3 == AGC:
            S4 = AHC
            print(S4)

B - AtCoder Quiz
S1 = input()
S2 = input()
S3 = input()
contest = ["ABC", "ARC", "AGC", "AHC"]
contest.remove(S1)
contest.remove(S2)
contest.remove(S3)
S4 = contest[0]
print(S4)


C - Inverse of Permutation
N = int(input())
P = list(map(int, input().split()))
Q = []
for i in range(N):
    if P[i] == i + 1:
        Q.append(P[i])
    else:
        Q.append(0)
for j in range(N):
    if Q[j] == 0:
        Q[j] = 
print(*Q)

N = int(input())
P = [0] + list(map(int, input().split()))
Q = [-1] * (N + 1)
for i in range(1, N + 1):
  Q[P[i]] = i
print(" ".join(map(str, Q[1:])))


A - Weather Forecast
N = int(input())
S = input()
if S[N-1] == "o":
    print("Yes")
else:
    print("No")


B - qwerty
#abc = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
#print(abc)
#num = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26]
#print(num)
dic = {1:"a",2:"b",3:"c",4:"d",5:"e",6:"f",7:"g",8:"h",9:"i",10:"j",11:"k",12:"l",13:"m",14:"n",15:"o",16:"p",17:"q",18:"r",19:"s",20:"t",21:"u",22:"v",23:"w",24:"x",25:"y",26:"z"}
P = list(map(int, input().split()))
Q = [-1] * 26
for i in range(0, 26):
  Q[i] = dic[P[i]]
strQ = "".join(Q)
sstrQ = strQ.replace(' ', '')
print(sstrQ)


C - Shapes
import numpy as np
N = int(input())
#S = [input() for _ in range(N)]
#T = [input() for _ in range(N)]
#S = [list(input().split(" ")) for i in range(N)]
#T = [list(input().split(" ")) for i in range(N)]
S = np.array(list(input().split())).reshape((5, 5))
T = np.array(list(input().split())).reshape((5, 5))
rotS = np.rot90(S)
rotT = np.rot90(T)
print(S)
print(T)
print(rotS)
print(rotT)
if :
    print("Yes")
else:
    print("No")

def rot(S):
	return list(zip(*S[::-1]))
def find_left_top(S):
	for i in range(N):
		for j in range(N):
			if S[i][j]=='#':
				return i,j
def is_same(S,T):
	Si,Sj = find_left_top(S)
	Ti,Tj = find_left_top(T)
	offset_i = Ti-Si
	offset_j = Tj-Sj
	for i in range(N):
		for j in range(N):
			ii = i+offset_i
			jj = j+offset_j
			if 0<=ii<N and 0<=jj<N:
				if S[i][j]!=T[ii][jj]: return False
			else:
				if S[i][j]=='#': return False
	return True
N = int(input())
S = [input() for _ in range(N)]
T = [input() for _ in range(N)]
cntS = sum(1 for i in range(N) for j in range(N) if S[i][j]=='#')
cntT = sum(1 for i in range(N) for j in range(N) if T[i][j]=='#')
if cntS != cntT:
	print("No")
	exit()
for _ in range(4):
	if is_same(S,T):
		print("Yes")
		exit()
	S = rot(S)
print("No")

N = int(input())
# グリッドを読み込んで#の位置の集合を返す
def read():
  S = set()
  for y in range(N):
    l = input()
    for x in range(N):
      if l[x]=="#":
        S.add((x, y))
  return S
S = read()
T = read()
for _ in range(4):
  # 最も左（複数あればそのうちで最も上）の#を(0, 0)の位置にする
  mx, my = min(S)
  S = set((x-mx, y-my) for x, y in S)
  mx, my = min(T)
  T = set((x-mx, y-my) for x, y in T)
  if S==T:
    print("Yes")
    exit(0)
  # Tを回転
  T = set((y, -x) for x, y in T)
print("No")


A - AtCoder Quiz 2
X = int(input())
if X < 40:
    print(40 - X) 
elif 40 <= X < 70:
    print(70 - X) 
elif 70 <= X < 90:
    print(90 - X) 
else:
    print("expert")


B - Maritozzo
S1 = input()
S2 = input()
S3 = input()
T = input()
SI = ""
for i in range(len(T)):
    if T[i] == "1":
        SI = SI + S1
    elif T[i] == "2":
        SI = SI + S2
    else:
        SI = SI + S3
print(SI)


C - Neo-lexicographic Ordering
X = input()
N = int(input())
S = [input() for i in range(N)]
SS = [-1] * (N + 1)
def dic():
    for i in range(N):
        if S[i] < S[i+1]:
            SS[i] = S[i]
        elif S[i] > S[i+1]:
            SS[i] = S[i+1]   
#S.sort(key = dic())
print(SS)


D - Strange Lunchbox
N = int(input())
X,Y = map(int,input().split())
AB = [input().split() for i in range(N)]
if :

else:
    print(-1)


C - Swiss-System Tournament
N,M = map(int,input().split())
S = [input() for i in range(2*N)]
rank = [[0,i] for i in range(2*N)]
# rank[i] = [x,y]  -> i位なのは -x勝で人y

def judge(a,b):
  # 引き分けなら-1,前者勝ちなら0,後者勝ちなら1
  if a==b: return -1
  if a=='G' and b=='P': return 1
  if a=='C' and b=='G': return 1
  if a=='P' and b=='C': return 1
  return 0

for j in range(M):
  for i in range(N):
    player1 = rank[2*i][1]
    player2 = rank[2*i+1][1]
    result = judge(S[player1][j], S[player2][j])
    if result !=-1:
        rank[2*i+result][0] -= 1
  rank.sort()

for _,i in rank:
    print(i+1)


C - Final Day
N,K = map(int,input().split())
P = [0] * N
for i in range(N):
    P[i] = sum(map(int, input().split()))
print(P)
#for j in range(N):
P[1] += 300
P.sort(reverse = True)
print(P)
if 

n, k = map(int, input().split())
s = [0] * n
for i in range(n):
  s[i] = sum(map(int, input().split()))
t = sorted(s, reverse=True)[k - 1]
for x in s:
  print("Yes" if x + 300 >= t else "No")


AtCoder Beginner Contest 229

A - First Grid

s1 = list(input())
s2 = list(input())
if s1[0] == "#" and s2[1] == "#" and s1[1] == "." and s2[0] == ".":
    print("No")
elif s1[1] == "#" and s2[0] == "#" and s1[0] == "." and s2[1] == ".":
    print("No")
else:
    print("Yes")

B - Hard Calculation

a,b = map(int,input().split())
if a > b:
    c = b
else:
    c = a
listA = [int(x) for x in list(str(a))]
listB = [int(x) for x in list(str(b))]
listC = [int(x) for x in list(str(c))]
listA.reverse()
listB.reverse()
moveUp = False
for i in range(len(listC)):
    addAPlusB = listA[i] + listB[i]
    if addAPlusB >= 10:
        moveUp = True
if moveUp == True:
    print("Hard")
else:
    print("Easy")

C - Cheese

MAX_N = 100
MAX_W = 10000
# 入力
N, W = map(int,input().split())
w = []
v = []
for i in range(N):
    a,b = map(int,input().split())
    v.append(a)
    w.append(b)
dp = [[0] * (MAX_W + 1) for _ in range(MAX_N + 1)]    # DPテーブル
for i in range(N):
    for j in range(W + 1):
        k = 0
        while k * w[i] <= j:
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j - k * w[i]] + k * v[i])
            k += 1
print(dp[N][W])
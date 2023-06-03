# 233A - Perfect Permutation

https://codeforces.com/problemset/problem/233/A

## Formal proof of working

Let p(i) be the ith element of sequence

`1 <= i <= n` and `p(p(i)) = i`, `p(i) != i`

hence, it implies `p(k) = i` and `p(i) = k` for all `1 <= i, k <= n` and `k != i`

therefore, for all `p(i) = k` there must exist `p(k) = i` such that `k != i`

hence we may describe such a sequence using a set of non-overlapping (`(a, b)` and `(c, d)` are
 non-overlapping if intersection of elements in pair 1 and pair 2 is a null set) unordered pairs

hence an unordered pair `(i, k)` implies `p(i) = k` and `p(k) = i`

therefore with `t` non overlapping pairs we can describe a sequnce of length `2 * t = n` 

but a sequence of length `2 * t + 1 = n` can't be fully described using such pairs
which implies `p(p(i)) != i`

therfore, such a sequnce can't have an odd number of elements

and one of the possible solutions of an even number of elements `2 * t = n`
is given by the set `S = {(i, n - (i - 1)) | All 1 <= i < n}`

which implies the sequence `p(i) = n - (i - 1)`
which is the reverse of `a(i) = i`

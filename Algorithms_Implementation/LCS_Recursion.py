def lcs(string1, string2, m, n) :
    if(m==0 or n==0):
        return 0
    
    if(string1[m-1]==string2[n-1]):
        return 1+lcs(string1, string2, m-1, n-1)
    
    return max(lcs(string1, string2, m-1, n),lcs(string1, string2, m, n-1)) 

print lcs('hello', 'hsfsesfsalsdlo', len('hello'), len('hsfsesfsalsdlo'))

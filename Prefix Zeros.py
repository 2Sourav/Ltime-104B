
t = int(input())






for _ in range(t):
    
    
    
    
    
    
    n, k = map(int, input().split())
    s = input()
    
    
    
    
    
    
    l = 0
    r = len(s) - 1
    
    
    
    
    
    
    ans = 0
    
    
    
    
    
    
    def calc(m):
        add = 0
        
        
        
        
        
        
        for i in range(m, -1, -1):
            
            
            
            
            
            
            v = ((ord(s[i]) - ord('0')) + add) % 10
            
            
            
            
            
            
            if v == 0:
                continue
            add += 10 - v
            
            
            
            
            
            
            
            
            
            
            
            
        return add
        
        
        
        
        
        
    while l <= r:
        
        
        
        
        
        
        m = (l + r) // 2
        
        
        
        
        
        
        if calc(m) > k:
            
            
            
            
            
            
            r = m - 1
            
            
            
            
            
            
        else:
            
            
            
            
            
            
            ans = m + 1
            
            
            
            
            
            
            l = m + 1
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
    print(ans)

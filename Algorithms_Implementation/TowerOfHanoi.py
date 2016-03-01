def TowerOfHanoi(n, fr, to, spare):
    if n==1:
        print 'from '+ fr + ' to ' +to
    
    else:
        TowerOfHanoi(n-1,fr,spare,to)
        TowerOfHanoi(1,fr,to,spare)
        TowerOfHanoi(n-1,spare,to,fr)
   
TowerOfHanoi(3,'source','destination','spare')

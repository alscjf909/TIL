import math
a,b,c=map(int,input().split())
if(b**2 -4*a*c)<0:
  if a<0:
    print("%.2f"%(-b/2/a)+"+"+"%.2f"%(math.sqrt(-(b**2 - 4*a*c))/2/(-a))+"i")
    print("%.2f"%(-b/2/a)+"-"+"%.2f"%(math.sqrt(-(b**2 - 4*a*c))/2/(-a))+"i")
  else:
    print("%.2f"%(-b/2/a)+"+"+"%.2f"%(math.sqrt(-(b**2 - 4*a*c))/2/a)+"i")
    print("%.2f"%(-b/2/a)+"-"+"%.2f"%(math.sqrt(-(b**2 - 4*a*c))/2/a)+"i")
elif (b**2 -4*a*c)==0:
  print("%.2f"%((-b/2/a)+(math.sqrt(-(b**2 - 4*a*c))/2/a)))
else:
  print("%.2f"%((-b/2/a)+(math.sqrt((b**2 - 4*a*c))/2/a)))
  print("%.2f"%((-b/2/a)-(math.sqrt((b**2 - 4*a*c))/2/a)))


def findPanelty(w,h,n,towers):
    widths=[0]
    height=[0]

    for tower in towers:
        widths.append(tower[0])
        height.append(tower[1])

    widths.append(w+1)
    height.append(h+1)
    widths.sort()
    height.sort()

    max_height=0
    max_width=0
    for i in range(n+1):
        max_width=max(max_width,widths[i+1]-widths[i]-1)
        max_height=max(max_height,height[i+1]-height[i]-1)
    
    return max_width*max_height
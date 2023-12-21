class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        #iterate through grid til we get a value of 1
        # set that cell as the root node
        # process adjacent tiles in orthogonal directions
        root = None
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 1:
                    root = (i,j)
        total = 0
        stack = [root]

        visitedNodes = set()
        
        def validTile(x,y,lenX, lenY):
            if(x < 0 or x >= lenX):
                return False
            elif(y < 0 or y >= lenY):
                return False
        
            return True

    
        def countPerimeter(node, total):
            #check directions
            x = node[0]
            y = node[1]
            #up
            if(validTile(x, y+1, len(grid), len(grid[0]))):
                if(grid[x][y+1] == 0):
                    total += 1
                    print("total", total)
                else:
                    if((x, y+1) not in visitedNodes):
                        stack.append((x,y+1))
            else:
                total += 1
            #down
            if(validTile(x, y-1, len(grid), len(grid[0]))):
                if(grid[x][y-1] == 0):
                    total += 1
                else:
                    if((x, y-1) not in visitedNodes):
                        stack.append((x,y-1))
            else:
                total += 1
            #right
            if(validTile(x+1, y, len(grid), len(grid[0]))):
                print(x+1, y, len(grid), len(grid[0]))
                if(grid[x+1][y] == 0):
                    total += 1
                else:
                    if((x+1, y) not in visitedNodes):
                        stack.append((x+1,y))
            else:
                total += 1
            #left
            if(validTile(x-1, y, len(grid), len(grid[0]))):
                if(grid[x-1][y] == 0):
                    total += 1
                else:
                    if((x-1, y) not in visitedNodes):
                        stack.append((x-1,y))
            else:
                total += 1
        while stack:
            currentNode = stack.pop()
            visitedNodes.add(currentNode)
            print(total)
            countPerimeter(currentNode, total)
        
        return total
    
    


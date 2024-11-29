from collections import deque

def is_valid(x, y, M, N, grid, visited):
    """Check if the cell (x, y) is within the grid and traversable."""
    return 0 <= x < M and 0 <= y < N and grid[x][y] == 0 and (x, y) not in visited

def min_moves(grid, M, N, source, destination, move_rule):
    # Directions based on move rules
    dx, dy = move_rule
    directions = [
        (dx, dy),           # Forward
        (dy, -dx),          # Right (90 degrees clockwise)
        (-dy, dx),          # Left (90 degrees anti-clockwise)
        (-dx, -dy)          # Backward (180 degrees)
    ]
    
    # Initialize BFS queue and visited set
    queue = deque([(source[0], source[1], 0)])  # (x, y, moves)
    visited = set()
    visited.add((source[0], source[1]))

    # Perform BFS
    while queue:
        x, y, moves = queue.popleft()

        # If we reach the destination, return the number of moves
        if (x, y) == (destination[0], destination[1]):
            return moves

        # Explore all 4 directions
        for dx, dy in directions:
            nx, ny = x + dx, y + dy  # New coordinates
            if is_valid(nx, ny, M, N, grid, visited):
                visited.add((nx, ny))
                queue.append((nx, ny, moves + 1))

    # If destination is unreachable, return -1
    return -1

# Input handling
M, N = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(M)]
source = tuple(map(int, input().split()))
destination = tuple(map(int, input().split()))
move_rule = tuple(map(int, input().split()))

# Get the minimum moves required
result = min_moves(grid, M, N, source, destination, move_rule)
print(result)

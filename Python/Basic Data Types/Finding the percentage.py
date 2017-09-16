if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    
    for i in range (n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = sum(scores) / len(scores)
        
    query_name = input()
    print("%0.2f" %student_marks[query_name])

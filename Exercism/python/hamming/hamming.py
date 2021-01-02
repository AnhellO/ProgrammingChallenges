def distance(strand_a, strand_b):
    if len(strand_a) != len(strand_b):
        raise ValueError("Error: Invalid length between DNA strands")
    
    return sum(a != b for a, b in zip(strand_a, strand_b))
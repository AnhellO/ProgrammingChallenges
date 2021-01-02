from string import ascii_uppercase

class Robot:
    # Use these sets as the available data for the ID generation
    available_nums = set(f"{i}" for i in range(100, 1000))
    available_alpha = set(''.join([i, j]) for i in ascii_uppercase for j in ascii_uppercase)

    def __init__(self):
        self.name = self._generate_random_name(self.available_alpha.pop(), self.available_nums.pop())
    
    def reset(self):
        # Get the old_name first
        old_name = self.name
        # Generate and assign a new name
        self.name = self._generate_random_name(self.available_alpha.pop(), self.available_nums.pop())
        # Since the name was reset, add back the previous components of the name to the sets so we have them available again
        self.available_alpha.add(old_name[:2])
        self.available_nums.add(old_name[2:])

    def _generate_random_name(self, alpha, num):
        return f"{alpha}{num}"
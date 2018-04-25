class BuffaloBuffalo:
    
    def check(self, s):
        return 'Good' if all([b == 'buffalo' for b in s.split(' ')]) else 'Not good'

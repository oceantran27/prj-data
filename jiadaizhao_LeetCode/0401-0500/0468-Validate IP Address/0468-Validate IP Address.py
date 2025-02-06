class Solution:
    def validIPAddress(self, IP: 'str') -> 'str':
        def isIP4Block(s):
            try:
                num = int(s)
                return str(num) == s and 0 <= num <= 255
            except:
                return False
                
        def isIP6Block(s):
            if len(s) > 4:
                return False
            try:
                num = int(s, 16)
                return num >= 0 and s[0] != '-'
            except:
                return False
                
        if IP.count('.') == 3 and all(isIP4Block(s) for s in IP.split('.')):
            return 'IPv4'
        if IP.count(':') == 7 and all(isIP6Block(s) for s in IP.split(':')):
            return 'IPv6'
        return 'Neither'

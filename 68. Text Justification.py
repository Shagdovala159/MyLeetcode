class Solution(object):
    def fullJustify(self, words, maxWidth):
        """
        :type words: List[str]
        :type maxWidth: int
        :rtype: List[str]
        """
        res = []
        temp = []
        temp_len = 0

        for word in words:
            if temp_len + len(word) + len(temp) > maxWidth:
                spaces_needed = maxWidth - temp_len
                if len(temp) == 1:
                    res.append(temp[0] + " " * spaces_needed)
                else:
                    space_between = spaces_needed // (len(temp) - 1)
                    extra_spaces = spaces_needed % (len(temp) - 1)

                    for i in range(extra_spaces):
                        temp[i] += " "

                    res.append((" " * space_between).join(temp))

                temp = []
                temp_len = 0

            temp.append(word)
            temp_len += len(word)

        res.append(" ".join(temp) + " " * (maxWidth - len(" ".join(temp))))
        return res

def solution(phone_book):

    for i in phone_book:
        j = phone_book.index(i) + 1
        while j < len(phone_book):
            k = phone_book[j]
            if len(i) > len(k):
                if k == i[:len(k)]:
                    return False
            elif len(i) <= len(k):
                if k[:len(i)] == i:
                    return False
            j += 1

    return True

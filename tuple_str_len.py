def multiple_returns(sentence):
    if len(sentence) == 0:
        return len(sentence), None
    else:
        return len(sentence), sentence[0]
    
def main():
    sentence = "At school, I learnt C!"
    length, first = multiple_returns(sentence)
    print("Length: {:d} - First character: {}".format(length, first))

    sentence2 = ""
    length2, first2 = multiple_returns(sentence2)
    print("Length: {:d} - First character: {}".format(length2, first2))
main()
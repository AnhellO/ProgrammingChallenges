def is_pangram(sentence):
    abc = "abcdefghijklmnopqrstuvwxyz"
    for ch in [c.lower() for c in sentence]:
        if ch in abc:
            abc = abc.replace(ch, "")

    return True if not abc else False
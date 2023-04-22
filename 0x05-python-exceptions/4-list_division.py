
BennettDixon
/
holbertonschool-higher_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
Beta Try the new code view
holbertonschool-higher_level_programming/0x05-python-exceptions/4-list_division.py
@BennettDixon
BennettDixon using try/except to handle different errors accordingly
 1 contributor
28 lines (25 sloc)  690 Bytes
#!/usr/bin/python3


def list_division(my_list_1, my_list_2, list_length):
    """
    takes two lists and creates a new list with result of divison
    operation
    handles errors and prints them to stdout
    """
    i = 0
    new_list = []
    result = 0
    for i in range(0, list_length):
        try:
            result = (my_list_1[i] / my_list_2[i])
        except TypeError:
            result = 0
            print("wrong type")
        except ZeroDivisionError:
            result = 0
            print("division by 0")
        except IndexError:
            result = 0
            print("out of range")
        finally:
            new_list.append(result)
    return new_list

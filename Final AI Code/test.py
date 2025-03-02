import socket


ESP32_IP = "192.168.4.1"
PORT = 12345  
client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect((ESP32_IP, PORT))


                if hand_sign_id == 3:  
                    gesture_string = "spin"
                elif hand_sign_id == 4:
                    gesture_string = "stop"
                elif hand_sign_id == 5:
                    gesture_string = "speedup"
                elif hand_sign_id == 6:
                    gesture_string = "slowdown"
                elif hand_sign_id == 7:
                    gesture_string = "forward"
                elif hand_sign_id == 8:
                    gesture_string = "right"
                elif hand_sign_id == 9:
                    gesture_string = "left"
                print(gesture_string)
                #client.sendall((gesture_string + "\n").encode())
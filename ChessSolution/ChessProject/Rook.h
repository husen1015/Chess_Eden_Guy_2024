#pragma once
#include "Piece.h"

class Rook : public Piece
{
public:

	Rook(const bool isWhite, const std::string place);
	~Rook();

	virtual bool checkIfMoveSuitsPieceAbilites(const std::string dst) const override;


    static bool checkRookMovement(const std::string src, const std::string dst);
	
};

/*
* short int shiba = 0;
Yo? BRO. WHAT JBDSIUCGBVE SMUG SHIBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
YAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
I JUST WANNA BE PART OF YOUR SYMPHONYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY
WAIT! They don't love you like I love you (-Smug Shiba - 2028)'
*/

/*




                                                  .............
                                           ....:-==+==----::::-=-:....                     .......
                                           .----:.......     ...:-==-:...           .....:----::---::...
                                ............=-..:----:::::--===-----::::.          .:=++=-:........:-=--:..
                             ..:-::---===-----:. ...:--==---:::::.....--.          .-::--==--:::--===--::::.
                            ..==.............-=:.  .:-:.:::::::::::..:--.  ...    .:+:..:::..:::.........:=.
                            ..-.............-=+:.  .:=:.::..::::::....--::-------::-+:::::::.:-:. .......:+.
                            ..-:::-==+++==-==-=:.  .:=:..::.:::....::.::...........:-:::::::::=-..:-===---=::...
                             .--:::::::--==-::--....:-...::....:::::...:--=======--::...::::::--:=-:.......:--:.
                             .---:::-++=--:.....:=*#*-:.....::::::..:..:.::::::---::....:..:..-=:........:=+-::.
                             .:==::::.:-==-::..  ...:--=-:..::..::....::---------:::::-:...:---=====-:::-::..::.
                             .:==-:--.  ...:-==-...-+=:.:-...:::.::.:=:...............:=-.::-:........::.   .-..
                             .:=-=:--..     ....:::.....--....:::.:.:-:::-----------::::-::-=:.      .--.   :-..
                              :=-+:-=:.         .-:.   .-=..:::::::.:....................:--=-.     ..--.  .:=.
                              :=:--:=-.         .-:.   .-=:.::::::..-:.                 .:=-+-.      .=-.  .--.
                              .=:-=:==.         .--..  .:-:.::::::::-:.                 .-=-=-.      .=:.  .--.
                              .---=.==.         .-=..  .:-:....:::::--.                 .-+-=:........=:. .:=:.
                              .-=:-.--..        .:+..  ..::::--::::-=-.                 .-+-:..:-=-:..-.. .:=..
                              .-+.:-::..        .:=...:-:...::-===--=-.                 .-=.  ....:--:.....-+.
                              .:+...:..         .:=::=-...         .-:.                 .:=...:===:...  ...-=.
                              .:=..             ..:.........       .-:.                 .:-:==:...      ...--.
                              .:=:.            ....:--------:::.....:..          ..  .. ......          ..:=:.
                              ..-:.         ......:::.....::::::::::..        .......::::..::...        ..:+..
                              ..:-.     ...--=#@@@@@@@@@%%#**+++-...   ..====+*#%@@@@@@@@@@#+++=....    ..:=.
                               .:-.   ..-++#@%#+=------=+*#%%@@@#-..    .=#@@@@%##*+==--:-=+#%#=-...    ..::.
                               .:-.   ...=%+:...........:::.........    ....:::::::::::.......-#*.........-..
                                .:..    .....  ..::--:::::::..-=.       ..-=...::::----=-:............:...-.
                                .::.         .:=+==@@@%%%+##=::#=...    .:*:.:+%+*@@@@%#-=+-...    ..:....:.
                                 .:.       ..-=-..-%@@@@%-:+=..=:...    ..=:.:+-.+@@@@@*:::==-.     ........
                                 ..::..........-+********+++=:...       .....-====++++++++-....   ...:::..
                                  ....:::-:....................                            .....:--::....
                                       ....:-----::.........                   .........::-----:....    .
                                            .....::-==--------:::::::::::::::--------==-:......         .
                                               ..:.  ........::::---------::::.........  .::.
                                                .:.                                      .::.
                                                .-.                                     ..::.
                                                .-:.......                           ....:::.
                                                .-...:---:::........        ........::--:.--.
                                                .-..   ...:::--==+++============-:::-+:...+-.
                                                .-..       .......................=*=....-*:.
                                                :-.. ......................:--+**+-.. ...+=:.
                                                :=...=%###############%%%#*+-:.....   ..-+--.
                                                :=.. .+-..................           ...=---.
                                               .:=.   ..                            ..::-:--.
                                               .:=.                                 ..:...--.
                                               .:=.                                  .:...-=.
                                               .:=.                                  ... .-=..
                                               .-=.                                       :=..
                                               .--.                                       :=:.
                                               .=-.                                       :=:.
                                               .=-.                                       :=-.
                                               .+:.                                       .--.
                                               .+:.                                       .-=.
                                              .:+:.                                       .-=.
                                              .:=.                                        .-+..
                                              .:=.                                        .-=..
                                              .--.                                        .:=:.
                                             ..--.                                        .:-:.
                                             ..=:.                                        ..--.
                                             .:+:.                                        ..--.
                                             .:+:.                                         .-=.
                                             .:-..                                         .:-.
                                             .-:.                                          .:-:.
                                            ..-:.                                           .--.
                                            .:-.                                            .:-..
                                            .-:.                                             .-:.
                                           .::..                                         ... .::..
                                          ..-..                                        ..:.. ..::.
                                         ..:..                                          ..     .::..
                                         .::.                                                  ..:..
                                       ...:..                                                   .::....
                                      ..:.....                                                 .....:..
                                      .::...:::.....                                      ....:::...-:.
                                      .:-:.....:--:::....                            ....:::-:....:-::.
                                    ..-:.:-:........::-------::................:::------:......:-:...-:..
                                    .--.  ..:=-::....  ......:--=++********+==-::.........::-=-...  .:+:.
                                   ..=-.     ....:--=---::::..................::::----==-:.....     ..=-.
                                   .:=:.           ......:::--=+++******++==--:::.......             .:=:
                                   .-=..                    ..................                       ..+:.
                                 ...-=.                                                               .-:...
                                ..:.:-.                                                             ...-:..:..
                                .:...:..                                                          ..:..:...::.
                               ..:....::...                                                      .::.::.. .::.
                               .:-..  ..::::.....                                           .....::::... ..-:.
                               ..--...    ..:----:.........                       ........:----::...   ..::.:..
                              ...::-:...     .....:---------:::..............:::---------:.....    ...:--:..:..
                              ..::...---::.......    .......::--===+++++====--::........  .......:----:..  ..:.
                              ..:..   ...:-------::........                     .......::-------:.....      ::.
                              ..-..        ......::-=+===-------------------------==+=--:......             .:..
                              .::.                 .............::::::::::.............                   ....:..
                            ..::.. ...                                                                   .... .:--:....
                          ..:-:.  .::.                                                                 ..::.    ..-:.::..
                       ...::-..   ....                                                                .:...      ..-:..::..
                      ..:..=:.                                                                                   ..-:. .-..
                     ..:...-:.                                                                                   .-:.. .--.
                     .::. ..-:.                                                                               ..:-:.  .:--..
                    ..--.  ..--..                                                                          ..:--:.. ..::.::.
                    ..:-:.. ..:--:....                                                              .....:---:......:-:..::.
                    ..:.:-..  ...:-----:.....                                                  ....:-----:.... ..:--:....-..
                    ..:...:-:...  .....:-------::..........                      ..........::----=-:..... ....:--:..  ..-:.
                    ..-:.  .:--::..       .....:-=+====------::::::.......:::::------======-:.....     ...:---...   ..:=:.
                     .:-:..  ...:---:.....        .........::::--------------:::..........     .....:----:....   ...-=:..
                       .--:...   ....-==--:::...........                           .........:::--==-:....     ...:==:..
                        ..:---:..     .....::-====------:::::::::.........::::::::-----====-::......       ..:-==:...
                           ...:-=-::.....       .......::::::::--------------::::::.......           ....:-=+-:..
                              .....:=++-::....            .......................                ...::=++-:....
                                     ...:--=++=-:::......                              .....:::-===--:...
                                        ........:::--=++++==--:::.................::--===-::::........
                                                  .............:::::::::::::................




                                                  
                                                  
                                                  
                                                  
                                                  
                                                  
                                                  
                                                                                                                                                                                              
                                                                                                                                                                                              
                                                                                                                                                                                              
                                                                                                                                                                                              
                                                                                                                                                                                              
                                                                ................                                                                                                              
                                                          ....::::----------:::::....                                                                                                         
                                                       ..:-----===--:::.......:--===-:....                     ..................                                                             
                                                      ..-----::........      .....:---==-...              .....::-====-:::-==--::...                                                          
                                        ...............:=-...:-----::::::---====------:::::..            ..-=++==-:..........:--==--:..                                                       
                                      ..:::----====---:-=-:......:-======-----::::::....:--..            .:-::--=++=-:...:::--=====-:::..                                                     
                                     .:==:.......:::::::::=-..   ..-::::::::::::.:::....:--..           ..-=::..::.:::::-::::::.......-:.                                                     
                                    .:+-...            ..-+=..   .:=-::.::::..::::.:::..:--:..............==:.:::::::..--....       .:+-.                                                     
                                    ..-................:=-+=:.   .:=-:....:::::::::.....:-=::---=====-----==::::::::..:--.. ..........+-.                                                     
                                    ..-::::--==++====--==-==:.   .:=-...::.::::......::.:::...............--:::::::::::--....:-====---=-:.....                                                
                                    ..--:.:::.::::---=-:::--:.....:=:....:::.....::::::..::---====+====--:::..::::::.::--::===-:...:::::::--..                                                
                                     .---::::::---=+++==--::-----==-..........:::::::.....::.:::::::::::::......::..::.:--=:...      ..:----..                                                
                                     .:-=-...-====-::.........:-=+++=-:....:::::::..::....:::::------==----:......:::::--:..........:===-:::..                                                
                                     .:-=-:::-:..:-===--:..   .....:-===:....::.::::....:::----------:::::..:--....:-----==++==--::--:....::..                                                
                                     .:==--::=:......::--==-:...:-++-:::-.....:::..::..==:...................:==:..::::..........:::... .:-:..                                                
                                     ..====::=-..      .....:::--:.....--:..::..:::...:=-....::::::::::.......:--:.:--:.        .:-:.   .:-:..                                                
                                      .+==+::=-..         ....::...   .-=:...:::::::..:::::::---------------:::..:---=-.        .:-:.   .:=:.                                                 
                                      .==-=-:==:.           ..-:..    .-=-.::::::::::.::.........................:---=-.       ..-=:.  ..-=:.                                                 
                                      .=----:-=-.           ..--:.    .-=-:.::::::::..--..                     ..-=-=+-.        .-=:.  ..--:.                                                 
                                      .=-:-=::+-.           ..:-:..   .:-::..::::::.::--..                     ..-=--=-.        .--:.  .:--..                                                 
                                      .-=:-=::+=.           ..:=-..   .:-:::.::..:::::--:.                     ..=+--=-.        .--.. ..:--..                                                 
                                      .-=--=::+=.           ..:=-..   ..::.....:::::::==:.                     ..=+---:..:---:...--.. ..-=:..                                                 
                                      .:=-:-:.--..           .:=-..  ...::---==-:::::-==:.                     ..-+:......::-::..::.. ..-=:..                                                 
                                      .:==.:-:-:..           .:=-....:-:....::--====--==:.                     ..-+.   .....::--:.... ..==:.                                                  
                                      ..==...:::.            ..--..-+=:..            .--:.                      .-=.....:-=+=:...   . .:==..                                                  
                                      ..==.. ...             ..-::--...              .--..                      .:-.:--==-:...      . .:--..                                                  
                                       .-=..                  ..:.....................::..                      ..--::....          . .--:..                                                  
                                       .--:.               ......::------===---::::...::..          ....................            . .-=:.                                                   
                                       .:-:..           ................:::::::--:::::...          ................:::....          . .==..                                                   
                                       ..--..     .....:.:-+*#%@@@@%%##*==---::::.....    ....:::::--=+*#%%@@@@@%%#+=+*+-.....      ...==.                                                    
                                       ..--..   ....-=++#@@@@@@%%%%%%@@@@@@@@@@@@%=...    .:+%@@@@@@@@@@@@@@@%%%%%%@@%*==+-...      ..:--.                                                    
                                       ..:-..   ..:=++#@%*=-:..........:--=+*####*-...     ..:+####*++=--:..........-+#%#=......... ..:-:.                                                    
                                       ..:-...  ....=#*-........::::::::::::::........     .....::-::::::::::::........:=*+...........-:..                                                    
                                        .:::..    .......  ....::::::::::::::::-:..        ...:=:...::::::::::-:..... .........:.::...-:.                                                     
                                        ..::..       .......-+**#%%%%%%#**#+=::=#=....     ..-#=.:-+##*%%@@@@@%#**=:............::....::.                                                     
                                        ...:..         ...-+=:.:*@@@@##%=-**:..:+=....     ..-*:..:+*--#@@@@%##-..:==-..     ............                                                     
                                         ..:....      ..:-===---*@@@@@@%=::++:.:-:.        ...--..-+-:-#@@@@@@%=--===-:..      .....::..                                                      
                                         ....::.............-++********+++===-.....        ......:--=====+=+++=====:....    ....::::..                                                        
                                           ....::-:::....... ..................                                    ........:::-::....                                                         
                                               ....::::---::.......                                          ........:----:::....   .                                                         
                                                    ......:--==--:::::....................................:::::---==-:......        .                                                         
                                                          ....::::------======--------:::::::------======-----::...:..              .                                                         
                                                           ...:..  ..........:::::-------------::::...........   ..:..                                                                        
                                                           ...:..              ..................                ..:..                                                                        
                                                            ..::.                                                .::..                                                                        
                                                            ..-:..                                              ..::..                                                                        
                                                            ..-:::........                                 ......:-:..                                                                        
                                                            ..-:..::---:::............          ...........::--:.:-=..                                                                        
                                                            .:-:.......::----------------------------------==:....=+..                                                                        
                                                            .:-:..     ........::::::--------:::::::::...:=+-.. .:#=..                                                                        
                                                            .:-:..               ....................:-+**=......+*-..                                                                        
                                                            .:-:.. .:.........................:--=+***+=:... ...:*=-..                                                                        
                                                            .:-:...:##*+++++++++++++*****####***+=-::....    ...=+--:.                                                                        
                                                            .:=:.. .=*=--========------::::..............    ..:+-:=:.                                                                        
                                                           ..:=:.. ..:.......................              ...:-=::=:.                                                                        
                                                           ..:=:.   ...                                   ...:::-.:=:.                                                                        
                                                           ..:=:.                                         ...:....:=:.                                                                        
                                                           ..:=:.                                          ..:....:+:.                                                                        
                                                           ..:=:.                                          .......:+:..                                                                       
                                                           ..-=:.                                                .:+-..                                                                       
                                                           ..-=:.                                                 :+-..                                                                       
                                                           ..--:.                                                 :=-..                                                                      
                                                  
                                                  */
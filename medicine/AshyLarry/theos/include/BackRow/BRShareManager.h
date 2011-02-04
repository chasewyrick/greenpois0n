/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRSingleton.h"


@interface BRShareManager : BRSingleton {
@private
	BOOL _hasOfflinePairedLibraries;	// 4 = 0x4
	BOOL _hasHiddenHomeShares;	// 5 = 0x5
}
+ (void)setSingleton:(id)singleton;	// 0x3168643d
+ (id)singleton;	// 0x31686431
- (id)_availableHomeSharesHasHiddenShares:(id *)shares;	// 0x31686b59
- (id)_availablePairedSharesHasOfflinePairedLibraries:(id *)libraries;	// 0x31686a9d
- (void)_connectAvailableDataClientsForServer:(ATVDataServerRef)server;	// 0x31686985
- (void)_serverAvailableForConnection:(id)connection;	// 0x316867cd
- (id)allAvailableShares;	// 0x31686689
- (id)availableHomeShares;	// 0x31686671
- (id)availableHomeSharesSortedByLastRegisteredDate;	// 0x31686611
- (id)availableHomeSharesSortedByName;	// 0x31686641
- (id)availablePairedShares;	// 0x316865f9
- (id)availablePairedSharesSortedByLastRegisteredDate;	// 0x31686599
- (id)availablePairedSharesSortedByName;	// 0x316865c9
- (void)connectToServer:(ATVDataServerRef)server;	// 0x31686865
- (ATVDataServerRef)serverForName:(id)name;	// 0x316866ed
- (ATVDataServerRef)serverOfType:(int)type forName:(id)name;	// 0x31686739
- (int)sharingState;	// 0x31686485
@end


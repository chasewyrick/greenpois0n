/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRProvider.h"

@class NSArray;

@interface BRAirportNetworksProvider : NSObject <BRProvider> {
@private
	NSArray *_networks;	// 4 = 0x4
}
- (id)initWithNetworks:(id)networks;	// 0x3166c3dd
- (id)controlFactory;	// 0x3166c331
- (id)dataAtIndex:(long)index;	// 0x3166c2f1
- (long)dataCount;	// 0x3166c311
- (void)dealloc;	// 0x3166c42d
- (id)hashForDataAtIndex:(long)index;	// 0x3166c299
- (void)setNetworks:(id)networks;	// 0x3166c36d
@end

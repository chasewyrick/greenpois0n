/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMetadataLineLayer : BRControl {
@private
	BRTextControl *_labelLayer;	// 40 = 0x28
	BRControl *_valueLayer;	// 44 = 0x2c
	float _maxLabelWidth;	// 48 = 0x30
}
- (id)initWithLabel:(id)label value:(id)value;	// 0x315ef865
- (void)dealloc;	// 0x315b7595
- (id)label;	// 0x315b7551
- (void)layoutSubcontrols;	// 0x315ef97d
- (void)setMaxLabelWidth:(float)width;	// 0x315b7571
- (id)value;	// 0x315ef855
@end


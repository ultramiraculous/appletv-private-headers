/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library


@interface ASSettingsTaskGetterResult : NSObject {
@private
	int _key;	// 4 = 0x4
	int _status;	// 8 = 0x8
	id _result;	// 12 = 0xc
}
@property(readonly, assign) int key;	// G=0x30a32d65; @synthesize=_key
@property(readonly, assign) id result;	// G=0x30a32d85; @synthesize=_result
@property(readonly, assign) int status;	// G=0x30a32d75; @synthesize=_status
- (id)initWithKey:(int)key status:(int)status result:(id)result;	// 0x30a32ca5
- (void)dealloc;	// 0x30a32d19
// declared property getter: - (int)key;	// 0x30a32d65
// declared property getter: - (id)result;	// 0x30a32d85
// declared property getter: - (int)status;	// 0x30a32d75
@end


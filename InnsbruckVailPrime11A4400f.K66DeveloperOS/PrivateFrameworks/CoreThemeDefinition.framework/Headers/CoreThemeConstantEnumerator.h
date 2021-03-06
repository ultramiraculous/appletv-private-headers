/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import </libobjc.A.h>


@interface CoreThemeConstantEnumerator : NSObject {
	void *_globalListPointer;	// 4 = 0x4
	int _listIndex;	// 8 = 0x8
	int _indexOfLastEntry;	// 12 = 0xc
	BOOL _isPastLastEntry;	// 16 = 0x10
}
+ (id)enumeratorForGlobalListAtAddress:(void *)address;	// 0x3073edb1
- (id)initWithGlobalListAtAddress:(void *)address;	// 0x3073ed55
- (void)_moveToIndexOfLastEntry;	// 0x3073eded
- (int)constantCount;	// 0x3073ee69
- (id)currentConstantHelper;	// 0x3073eeb9
- (id)firstConstantHelper;	// 0x3073efc1
- (id)lastConstantHelper;	// 0x3073f025
- (id)nextConstantHelper;	// 0x3073eef5
- (id)previousConstantHelper;	// 0x3073ef85
@end


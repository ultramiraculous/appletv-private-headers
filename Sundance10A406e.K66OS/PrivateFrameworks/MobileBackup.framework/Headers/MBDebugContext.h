/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSMutableDictionary;

@interface MBDebugContext : NSObject {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(retain, nonatomic) NSDate *simulatedDate;	// G=0x30599c79; S=0x30599c95; 
@property(readonly, assign, nonatomic) long time;	// G=0x30599c39; 
+ (id)defaultDebugContext;	// 0x30599b31
- (id)init;	// 0x30599b75
- (BOOL)boolForName:(id)name;	// 0x30599dfd
- (void)dealloc;	// 0x30599bed
- (id)description;	// 0x30599ff9
- (BOOL)eval:(id)eval;	// 0x30599fb5
- (int)intForName:(id)name;	// 0x30599e71
- (BOOL)isFlagSet:(id)set;	// 0x30599ccd
- (id)performSelectorForName:(id)name;	// 0x30599eed
- (id)performSelectorForName:(id)name withObject:(id)object;	// 0x30599f49
- (void)removeValueForName:(id)name;	// 0x30599d71
- (void)setBool:(BOOL)aBool forName:(id)name;	// 0x30599db1
- (void)setDelegate:(id)delegate andSelector:(SEL)selector forName:(id)name;	// 0x30599e99
- (void)setFlag:(id)flag;	// 0x30599d01
- (void)setInt:(int)int forName:(id)name;	// 0x30599e31
// declared property setter: - (void)setSimulatedDate:(id)date;	// 0x30599c95
- (void)setValue:(id)value forName:(id)name;	// 0x30599d51
// declared property getter: - (id)simulatedDate;	// 0x30599c79
// declared property getter: - (long)time;	// 0x30599c39
- (id)valueForName:(id)name;	// 0x30599d91
@end


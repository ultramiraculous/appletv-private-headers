/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import </libobjc.A.h>

@class NSMutableArray, NSString;

@interface _ML3DatabaseNaturalStatement : NSObject {
	NSString *_sql;	// 4 = 0x4
	NSMutableArray *_parameters;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *parameters;	// G=0x3157b365; S=0x3157b375; @synthesize=_parameters
@property(retain, nonatomic) NSString *sql;	// G=0x3157b32d; S=0x3157b33d; @synthesize=_sql
+ (id)naturalStatementWithSQL:(id)sql parameters:(id)parameters;	// 0x3157b1bd
- (id)init;	// 0x3157b139
- (void).cxx_destruct;	// 0x3157b39d
// declared property getter: - (id)parameters;	// 0x3157b365
- (void)setParameter:(id)parameter forPosition:(unsigned)position;	// 0x3157b261
// declared property setter: - (void)setParameters:(id)parameters;	// 0x3157b375
// declared property setter: - (void)setSql:(id)sql;	// 0x3157b33d
// declared property getter: - (id)sql;	// 0x3157b32d
@end

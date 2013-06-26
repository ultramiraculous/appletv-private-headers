/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import </libobjc.A.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface AXReport : NSObject {
	NSString *_baseURL;	// 4 = 0x4
	NSString *_route;	// 8 = 0x8
	NSString *_action;	// 12 = 0xc
	NSMutableDictionary *_simpleParameters;	// 16 = 0x10
	NSMutableArray *_fileParameters;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *action;	// G=0x2fe35669; S=0x2fe35679; @synthesize=_action
@property(retain, nonatomic) NSString *baseURL;	// G=0x2fe35629; S=0x2fe35639; @synthesize=_baseURL
@property(retain, nonatomic) NSMutableArray *fileParameters;	// G=0x2fe356a9; S=0x2fe356b9; @synthesize=_fileParameters
@property(retain, nonatomic) NSString *route;	// G=0x2fe35649; S=0x2fe35659; @synthesize=_route
@property(retain, nonatomic) NSMutableDictionary *simpleParameters;	// G=0x2fe35689; S=0x2fe35699; @synthesize=_simpleParameters
// declared property getter: - (id)action;	// 0x2fe35669
- (void)addFile:(id)file parameterName:(id)name contentType:(id)type contentEncoding:(id)encoding data:(id)data;	// 0x2fe34d61
- (void)addSimpleParameter:(id)parameter forName:(id)name;	// 0x2fe34e7d
// declared property getter: - (id)baseURL;	// 0x2fe35629
- (void)dealloc;	// 0x2fe34ccd
// declared property getter: - (id)fileParameters;	// 0x2fe356a9
- (BOOL)isEqual:(id)equal;	// 0x2fe35501
- (id)renderPOSTBody;	// 0x2fe34ef5
// declared property getter: - (id)route;	// 0x2fe35649
// declared property setter: - (void)setAction:(id)action;	// 0x2fe35679
// declared property setter: - (void)setBaseURL:(id)url;	// 0x2fe35639
// declared property setter: - (void)setFileParameters:(id)parameters;	// 0x2fe356b9
// declared property setter: - (void)setRoute:(id)route;	// 0x2fe35659
// declared property setter: - (void)setSimpleParameters:(id)parameters;	// 0x2fe35699
// declared property getter: - (id)simpleParameters;	// 0x2fe35689
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface DSMBookmark : NSObject <NSCoding>
{
    NSString *m_absoluteURLString;
    NSString *m_docSetIdentifier;
    NSString *m_name;
}

+ (id)bookmarkFromDictionary:(id)arg1;
+ (id)bookmarkWithName:(id)arg1 URLString:(id)arg2 docSetIdentifier:(id)arg3;
@property(retain, nonatomic) NSString *name; // @synthesize name=m_name;
@property(retain, nonatomic) NSString *docSetIdentifier; // @synthesize docSetIdentifier=m_docSetIdentifier;
@property(retain, nonatomic) NSString *absoluteURLString; // @synthesize absoluteURLString=m_absoluteURLString;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

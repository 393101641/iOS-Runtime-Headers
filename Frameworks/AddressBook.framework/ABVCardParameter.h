/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject  {
    NSString *_name;
    NSString *_grouping;
    id _value;
    NSMutableArray *_types;
    BOOL _primary;
}


- (BOOL)isPrimary;
- (id)name;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)value;
- (void)setValue:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)addType:(id)arg1;
- (void)addTypes:(id)arg1;
- (void)setIsPrimary:(BOOL)arg1;
- (id)types;
- (void)setGrouping:(id)arg1;
- (id)grouping;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreBrowseSectionUniformContentItemTypeResolver : NSObject {
    struct map<MusicStoreBrowseDetailedContentItemType, unsigned long, std::__1::less<MusicStoreBrowseDetailedContentItemType>, std::__1::allocator<std::__1::pair<const MusicStoreBrowseDetailedContentItemType, unsigned long> > > { 
        struct __tree<std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, std::__1::__map_value_compare<MusicStoreBrowseDetailedContentItemType, std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MusicStoreBrowseDetailedContentItemType>, true>, std::__1::allocator<std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long> > > { 
            struct __tree_node<std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<MusicStoreBrowseDetailedContentItemType, std::__1::__value_type<MusicStoreBrowseDetailedContentItemType, unsigned long>, std::__1::less<MusicStoreBrowseDetailedContentItemType>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _contentItemTypeOccurrences;
    bool  _hasValidUniformContentItemType;
    unsigned long  _totalNumberOfOccurrences;
    int  _uniformContentItemType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addContentItemType:(int)arg1;
- (int)uniformContentItemType;

@end
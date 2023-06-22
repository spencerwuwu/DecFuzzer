#ifndef s910retdec_H
#define s910retdec_H

#include "w2c2_base.h"

typedef struct s910retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s910retdecInstance;

void f0(s910retdecInstance*);

void f1(s910retdecInstance*);

U32 f2(s910retdecInstance*);

void f3(s910retdecInstance*,U32);

U32 f4(s910retdecInstance*,U32,U32,U32,U32);

void f5(s910retdecInstance*,U32,U32,U32,U32,U32);

void f6(s910retdecInstance*,U32);

void f7(s910retdecInstance*,U32,U32,U32);

void f8(s910retdecInstance*,U32,U32,U32);

void s910retdec____wasm_call_ctors(s910retdecInstance*i);

void s910retdec____wasm_apply_data_relocs(s910retdecInstance*i);

U32 s910retdec_func_1(s910retdecInstance*i);

void s910retdec_call_cb(s910retdecInstance*i,U32 l0);

void s910retdecInstantiate(s910retdecInstance* instance, void* resolve(const char* module, const char* name));

void s910retdecFreeInstance(s910retdecInstance* instance);

#endif /* s910retdec_H */


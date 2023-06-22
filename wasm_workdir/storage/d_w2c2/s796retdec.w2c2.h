#ifndef s796retdec_H
#define s796retdec_H

#include "w2c2_base.h"

typedef struct s796retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s796retdecInstance;

void f0(s796retdecInstance*);

void f1(s796retdecInstance*);

U32 f2(s796retdecInstance*);

void f3(s796retdecInstance*,U32);

U32 f4(s796retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s796retdecInstance*,U32,U32,U32,U32,U32);

void f6(s796retdecInstance*,U32);

void f7(s796retdecInstance*,U32,U32,U32);

void f8(s796retdecInstance*,U32,U32,U32);

void s796retdec____wasm_call_ctors(s796retdecInstance*i);

void s796retdec____wasm_apply_data_relocs(s796retdecInstance*i);

U32 s796retdec_func_1(s796retdecInstance*i);

void s796retdec_call_cb(s796retdecInstance*i,U32 l0);

void s796retdecInstantiate(s796retdecInstance* instance, void* resolve(const char* module, const char* name));

void s796retdecFreeInstance(s796retdecInstance* instance);

#endif /* s796retdec_H */


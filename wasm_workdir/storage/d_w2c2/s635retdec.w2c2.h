#ifndef s635retdec_H
#define s635retdec_H

#include "w2c2_base.h"

typedef struct s635retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s635retdecInstance;

void f0(s635retdecInstance*);

void f1(s635retdecInstance*);

U32 f2(s635retdecInstance*);

void f3(s635retdecInstance*,U32);

U32 f4(s635retdecInstance*,U32,U32,U32);

void f5(s635retdecInstance*,U32,U32,U32,U32,U32);

void f6(s635retdecInstance*,U32);

void f7(s635retdecInstance*,U32,U32,U32);

void f8(s635retdecInstance*,U32,U32,U32);

void s635retdec____wasm_call_ctors(s635retdecInstance*i);

void s635retdec____wasm_apply_data_relocs(s635retdecInstance*i);

U32 s635retdec_func_1(s635retdecInstance*i);

void s635retdec_call_cb(s635retdecInstance*i,U32 l0);

void s635retdecInstantiate(s635retdecInstance* instance, void* resolve(const char* module, const char* name));

void s635retdecFreeInstance(s635retdecInstance* instance);

#endif /* s635retdec_H */


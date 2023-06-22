#ifndef s553retdec_H
#define s553retdec_H

#include "w2c2_base.h"

typedef struct s553retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s553retdecInstance;

void f0(s553retdecInstance*);

void f1(s553retdecInstance*);

U32 f2(s553retdecInstance*);

void f3(s553retdecInstance*,U32);

U32 f4(s553retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s553retdecInstance*,U32,U32,U32,U32,U32);

void f6(s553retdecInstance*,U32);

void f7(s553retdecInstance*,U32,U32,U32);

void f8(s553retdecInstance*,U32,U32,U32);

void s553retdec____wasm_call_ctors(s553retdecInstance*i);

void s553retdec____wasm_apply_data_relocs(s553retdecInstance*i);

U32 s553retdec_func_1(s553retdecInstance*i);

void s553retdec_call_cb(s553retdecInstance*i,U32 l0);

void s553retdecInstantiate(s553retdecInstance* instance, void* resolve(const char* module, const char* name));

void s553retdecFreeInstance(s553retdecInstance* instance);

#endif /* s553retdec_H */


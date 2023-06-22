#ifndef s72retdec_H
#define s72retdec_H

#include "w2c2_base.h"

typedef struct s72retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s72retdecInstance;

void f0(s72retdecInstance*);

void f1(s72retdecInstance*);

U32 f2(s72retdecInstance*);

void f3(s72retdecInstance*,U32);

U32 f4(s72retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s72retdecInstance*,U32,U32,U32,U32,U32);

void f6(s72retdecInstance*,U32);

void f7(s72retdecInstance*,U32,U32,U32);

void f8(s72retdecInstance*,U32,U32,U32);

void s72retdec____wasm_call_ctors(s72retdecInstance*i);

void s72retdec____wasm_apply_data_relocs(s72retdecInstance*i);

U32 s72retdec_func_1(s72retdecInstance*i);

void s72retdec_call_cb(s72retdecInstance*i,U32 l0);

void s72retdecInstantiate(s72retdecInstance* instance, void* resolve(const char* module, const char* name));

void s72retdecFreeInstance(s72retdecInstance* instance);

#endif /* s72retdec_H */


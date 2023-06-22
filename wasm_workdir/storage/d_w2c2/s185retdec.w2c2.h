#ifndef s185retdec_H
#define s185retdec_H

#include "w2c2_base.h"

typedef struct s185retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s185retdecInstance;

void f0(s185retdecInstance*);

void f1(s185retdecInstance*);

U32 f2(s185retdecInstance*);

void f3(s185retdecInstance*,U32);

U32 f4(s185retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s185retdecInstance*,U32,U32,U32,U32,U32);

void f6(s185retdecInstance*,U32);

void f7(s185retdecInstance*,U32,U32,U32);

void f8(s185retdecInstance*,U32,U32,U32);

void s185retdec____wasm_call_ctors(s185retdecInstance*i);

void s185retdec____wasm_apply_data_relocs(s185retdecInstance*i);

U32 s185retdec_func_1(s185retdecInstance*i);

void s185retdec_call_cb(s185retdecInstance*i,U32 l0);

void s185retdecInstantiate(s185retdecInstance* instance, void* resolve(const char* module, const char* name));

void s185retdecFreeInstance(s185retdecInstance* instance);

#endif /* s185retdec_H */


#ifndef s133r2_H
#define s133r2_H

#include "w2c2_base.h"

typedef struct s133r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s133r2Instance;

void f0(s133r2Instance*);

void f1(s133r2Instance*);

U32 f2(s133r2Instance*);

void f3(s133r2Instance*,U32);

U32 f4(s133r2Instance*,U32,U32,U32);

void f5(s133r2Instance*,U32,U32,U32,U32,U32);

void f6(s133r2Instance*,U32);

void f7(s133r2Instance*,U32,U32,U32);

void f8(s133r2Instance*,U32,U32,U32);

void s133r2____wasm_call_ctors(s133r2Instance*i);

void s133r2____wasm_apply_data_relocs(s133r2Instance*i);

U32 s133r2_func_1(s133r2Instance*i);

void s133r2_call_cb(s133r2Instance*i,U32 l0);

void s133r2Instantiate(s133r2Instance* instance, void* resolve(const char* module, const char* name));

void s133r2FreeInstance(s133r2Instance* instance);

#endif /* s133r2_H */

